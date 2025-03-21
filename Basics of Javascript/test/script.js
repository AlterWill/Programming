console.log('javascript is good');
var number = 5;
var string ='Hello there';
var isRAd  = true;
var food = ['egg','milk','curd']

document.getElementById('box').innerHTML = number + 5;
document.getElementById('box').innerHTML = string;
if (number == 10){
    console.log('yeah buddy');
}else{
    console.log('nope')
}
for(var i=0;i<10;i++){
    console.log(i);
}
for(var i=0;i<food.length;i++){
    console.log(food[i]);
}

console.log('hello');

function listfood(){
    for(var i=0;i<food.length;i++){
        console.log(food[i]);
    } 
}
listfood();
console.log('hello');

document.getElementById('box').addEventListener('click',function(){
    alert('I got clicked')
});