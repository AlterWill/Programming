var a=0,q=0,p=0;
var b=0;
var c=document.getElementById('display')
var d=document.getElementById('inc')
var e=document.getElementById('dec')

function Decrement(){
    a--;
    q++;
    dis();
}

function Increment(){
    b++;
    p++;
    dis();
}

function dis(){
    c.innerHTML=b+a;
    d.innerHTML=`Click on Increment:${p}`;
    e.innerHTML=`Click on Decrement:${q}`;
}

