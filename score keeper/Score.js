var bp1 = document.getElementById("bp1");
var bp2 = document.getElementById("bp2");
var reset = document.getElementById("reset");
var p1 = document.getElementById("p1");
var gamefinished=false;
var p1score=0;
var p2score=0;
var input=document.getElementById("input");
var value=5;
var winscore=document.getElementById("winscore");
var winner =0;
var win=0;

bp1.addEventListener("click",function(){
 if(!gamefinished) 
  	{p1score++;
  	p1.textContent=p1score;}
       if(value===p1score && win===0)
       {
          p1.style.color="green";

          gamefinished=true;
      	
      	  win=1;
        }
      	 

  });
  	
  	bp2.addEventListener("click",function(){
 if(!gamefinished) 
  	{p2score++;
  	p2.textContent=p2score;
}

if(value===p2score && win===0)
      	{ 
      		gamefinished=true;
      		p2.style.color="green";
      		win=1;
               
      	 }
      
  });
  	
  	input.addEventListener("change",function(){
         value=Number(this.value);
         winscore.textContent=value;

  	});

  	reset.addEventListener("click",function(){
p1score=0;
p2score=0;
 winner =0;
  win=0;
 
p1.style.color="black";
p2.style.color="black";
p1.textContent=0;
p2.textContent=0;
gamefinished=false;

  	});