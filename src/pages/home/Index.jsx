import { useState, useEffect } from 'react';
import './style.css';
import Trash from "../../assets/icon_trash.svg";
import { getUsers, deleteUser, createUser } from '../../services/api';

function Index() {
  const [users, setUsers] = useState([]);
  const [formData, setFormData] = useState({
    name: '',
    age: '',
    email: ''
  });
  const [loading, setLoading] = useState(false);

  const loadUsers = async () => {
    try {
      setLoading(true);
      const data = await getUsers();
      setUsers(data);
    } catch (error) {
      console.error('Erro ao carregar usuários:', error);
    } finally {
      setLoading(false);
    }
  };

  useEffect(() => {
    loadUsers();
  }, []);

  const handleInputChange = (e) => {
    const { name, value } = e.target;
    setFormData(prev => ({
      ...prev,
      [name]: name === 'age' ? Number(value) : value
    }));
  };

  const handleSubmit = async (e) => {
    e.preventDefault();
    try {
      const newUser = await createUser(formData);
      setUsers(prev => [...prev, newUser]);
      setFormData({ name: '', age: '', email: '' });
    } catch (error) {
      console.error('Erro ao criar usuário:', error);
    }
  };

  const handleDelete = async (id) => {
    try {
      await deleteUser(id);
      setUsers(prev => prev.filter(user => user.id !== id));
    } catch (error) {
      console.error('Erro ao deletar usuário:', error);
    }
  };

  return (
    <div className="container">
      <form onSubmit={handleSubmit}>
        <h1>Cadastro de Usuário</h1>
        <input 
          name="name" 
          placeholder="Nome" 
          type="text"
          value={formData.name}
          onChange={handleInputChange}
          required
        />
        <input 
          name="age" 
          placeholder="Idade" 
          type="number" 
          min="1"
          value={formData.age}
          onChange={handleInputChange}
          required
        />
        <input 
          name="email" 
          placeholder="Email" 
          type="email" 
          value={formData.email}
          onChange={handleInputChange}
          required
        />
        <button type="submit" disabled={loading}>
          {loading ? 'Aguarde...' : 'Cadastrar'}
        </button>
      </form>

      <div>
        {loading && users.length === 0 ? (
          <p>Carregando usuários...</p>
        ) : (
          users.map(user => (
            <div key={user.id} className="card_user">
              <div>
                <p>Nome: <span>{user.name}</span></p>
                <p>Idade: <span>{user.age} anos</span></p>
                <p>Email: <span>{user.email}</span></p>
              </div>
              <button 
                type="button" 
                onClick={() => handleDelete(user.id)}
                disabled={loading}
              >
                <img src={Trash} alt="Deletar usuário" />
              </button>
            </div>
          ))
        )}
      </div>
    </div>
  )
}

export default Index
