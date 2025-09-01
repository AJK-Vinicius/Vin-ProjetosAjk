import { useState } from "react";

function AddTask({onTaskAdd}) {
    const [title, setTitle] = useState("");
    const [description, setDescription] = useState("");

    function handleAddTask() {
        onTaskAdd(title, description);
        setTitle("");
        setDescription("");
    }

    return (
    <div className="space-y-4 p-6 bg-slate-200 rounded-md shadow flex flex-col gap-2">
        <input 
        type="text" 
        placeholder="Digite o título da tarefa" 
        className="border border-slate-300 outline-slate-400 px-4 py-2 rounded-md"
        value={title}
        onChange={(event) => setTitle(event.target.value)}
        />
        <input 
        type="text" 
        placeholder="Digite a descrição da tarefa" 
        className="border border-slate-300 outline-slate-400 px-4 py-2 rounded-md"
        value={description}
        onChange={(event) => setDescription(event.target.value)}
        />
        <button
        onClick={() => {
            if (!title.trim() || !description.trim()) {
                return alert ("Preencha todos os campos");
            }
            handleAddTask();
        }}  
        className="bg-slate-500 px-4 py-2 rounded-md text-white font-medium">
            Adicionar
        </button>
    </div>
    );
}
export default AddTask;
