import axios from "axios";

const api = axios.create({
  baseURL: "https://jsonplaceholder.typicode.com"
});

export const getUsers = async () => {
  try {
    const response = await api.get('/users', {
      params: {
        _limit: 3
      }
    });
    return response.data.map(user => ({
      id: user.id,
      name: user.name,
      email: user.email,
      age: Math.floor(Math.random() * (60 - 18 + 1)) + 18
    }));
  } catch (error) {
    console.error('Erro ao buscar usuários:', error);
    throw error;
  }
};

export const deleteUser = async (id) => {
  try {
    await api.delete(`/users/${id}`);
    return id;
  } catch (error) {
    console.error('Erro ao deletar usuário:', error);
    throw error;
  }
};

export const createUser = async (userData) => {
  try {
    const response = await api.post('/users', userData);
    return {
      ...response.data,
      age: userData.age
    };
  } catch (error) {
    console.error('Erro ao criar usuário:', error);
    throw error;
  }
};

export default api;
