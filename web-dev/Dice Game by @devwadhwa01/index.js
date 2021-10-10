function randomDice()
{
  var num=Math.random()*6;
  num=Math.floor(num)+1;
  return num;
}

var no1=randomDice();
var no2=randomDice();

var src1="images/dice"+no1+".gif";
var src2="images/dice"+no2+".gif";

// Dice 1
document.querySelector(".firstDice").setAttribute("src",src1);

// Dice 2
document.querySelector(".secondDice").setAttribute("src",src2);

//Timeout
setTimeout(function(){
// Declaring the winner
if(no1>no2)
{
  document.querySelector("#result").innerHTML="Player 1 wins!";
}
else if(no2>no1)
{
  document.querySelector("#result").innerHTML="Player 2 wins!";
}
else {
  document.querySelector("#result").innerHTML="Draw!";
}
}, 1400);
