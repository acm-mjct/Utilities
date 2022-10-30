const button = document.querySelector('button');
const bge = document.querySelector('section');

button.addEventListener('click',() => {
    let col = "#";
    col+=Math.random().toString(8).slice(2,8);
    bge.style.backgroundColor = col;
})