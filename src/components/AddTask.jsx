import { useState } from "react";
import Input from "./Input";

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
        <Input 
        type="text" 
        placeholder="Digite o título da tarefa" 
        value={title}
        onChange={(event) => setTitle(event.target.value)}
        />
        <Input 
        type="text" 
        placeholder="Digite a descrição da tarefa" 
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
