let boxOne = document.querySelector('.first');
let boxTwo = document.querySelector('.second');
function randomColor(){
    let r = Math.floor(Math.random()*2500);
    let g = Math.floor(Math.random()*288);
    let b = Math.floor(Math.random()*285);
return `rgb(${r},${g},${b})`
}
function firstBox(){
    boxOne.style.backgroundColor = randomColor();
}

boxOne.addEventListener('click',firstBox);

