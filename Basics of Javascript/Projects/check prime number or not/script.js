function check_prime(){
    let a=parseInt(document.getElementById('input').value);
    let y=a;
    let c=document.getElementById('display');
    let b=Math.ceil(a/2);
    let i=0;
    let flag=0;
    for(i=2;i<b;i++){
        if(a%i==0){
            flag=1;
            break;
        }
    }
    if (flag==0){
        c.innerHTML=`${a} is a prime number`;
    }else{
        c.innerHTML=`${a} is not a prime number`;
    }
}