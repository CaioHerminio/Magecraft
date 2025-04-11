//🧙 Magecraft University - JavaScript Edition

//Import the readline module to handle user input
//This module allows us to read input from the console
const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  
  //readline.question gets the user input.The (color) is the variable that will store the user input
  readline.question("Enter a color: ", (color) => {
    //the same as the above, but the data will be stored in the animal variable
    readline.question("Enter an animal: ", (animal) => {
      //the same as the above, but the data will be stored in the mana variable
      readline.question("Enter a number between 100 and 900: ", (mana) => {
        //the console.log function prints the text to the console
        console.log("\nWelcome to Magecraft University");
        //the ${something} syntax allows us to insert variables into strings
        console.log(`Your alias is ${color} ${animal}`);
        console.log(`Your current mana level is ${mana}, but we will polish you so that you reach your maximum potential!`);
        //the readline.close() function closes the readline interface, ending the program
        readline.close();
      });
    });
  });
  
