var arr =["https://static01.nyt.com/images/2020/01/31/world/31ozf-fires-kangaroo/merlin_166536642_24b1e96c-327a-4b9c-9979-f87ed8a0b502-articleLarge.jpg?quality=75&auto=webp&disable=upscale",
"https://api.time.com/wp-content/uploads/2019/12/australia-bushfires.jpg","https://a57.foxnews.com/media2.foxnews.com/BrightCove/694940094001/2020/01/02/931/524/694940094001_6119321485001_6119325937001-vs.jpg?ve=1&tl=1"];
var count=0;

var pic = document.querySelector("#slider");

var t = setInterval(slide,2000);

function slide()
{
	pic.setAttribute("src",arr[count]);
	count++;

	if(count=== 3)
		{ count=0;}
   

}





