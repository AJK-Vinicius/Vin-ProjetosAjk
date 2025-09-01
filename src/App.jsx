import Task from "./components/Task";
import AddTask from "./components/AddTask";
import { useState, useEffect } from "react";
import { v4 as uuid } from "uuid";

function App() {
  const [task, setTask] = useState(JSON.parse(localStorage.getItem("tasks")) || []);

  useEffect(() => {
    localStorage.setItem("tasks", JSON.stringify(task));
  }, [task]);

  useEffect(() => {
    async function fetchData() {
    //Chamada a API
    const response = await fetch("https://jsonplaceholder.typicode.com/todos?_limit=3", {
      method: "GET"
    });
    //Coleta dos dados
    const data = await response.json();
    //Setar os dados na state
    setTask(data);
  }
  fetchData();
}, []);

  function onTaskClick(taskId) {
    const newTasks = task.map((task) => {
      if (task.id === taskId) {
        return { ...task, isCompleted: !task.isCompleted };
      }
      return task;
    });
    setTask(newTasks);
  }

  function onTaskDelete(taskId) {
    const newTasks = task.filter((task) => task.id !== taskId);
    setTask(newTasks);
  }

  function onTaskAdd(title, description) {
    const newTasks = [...task, { id: uuid(), title, description, isCompleted: false }];
    setTask(newTasks);
  }
  

  return (
    <div className="w-screen h-screen bg-slate-500 flex justify-center p-6">
      <div className="w-[500px] space-y-4">
        <h1 className="text-3xl text-slate-100 font-bold text-center">
          Gerenciador de Tarefas{" "}
        </h1>
        <AddTask onTaskAdd={onTaskAdd}/>
        <Task task={task} onTaskClick={onTaskClick} onTaskDelete={onTaskDelete} />
      </div>
    </div>
  );
}

export default App;
