const button = document.getElementById("add-btn");
const ul = document.getElementById("ul");
const log = document.getElementById('log')
let todos = []
let ulHTML = "";
button.addEventListener("click", () => {
  const input = document.getElementById("new-todo");
  todos.push(input.value);

  todos.forEach((el) => {
    console.log(el);
    let todoHTML = ` 
        <li>
        <input type="checkbox" />
        <a>${el}</a>
        <button onClick="this.parentNode.parentNode.removeChild(this.parentNode);rm(this.parentNode)">-</button>
        </li>`;
    ulHTML += todoHTML;
  });
  ul.innerHTML = ulHTML;
  ulHTML = "";
});
log.addEventListener("click",()=>{
    console.log(todos)
})

function removeItemOnce(arr, value) {
  var index = arr.indexOf(value);
  if (index > -1) {
    arr.splice(index, 1);
  }
  return arr;
}
const rm=(el)=>{
    removeItemOnce(todos,el.innerText)
    console.log(el.innerText.trim()+'x')
}
const todo = document.getElementById("todo");
