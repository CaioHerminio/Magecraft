//🧙 Magecraft University - JavaScript Edition

const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  
  readline.question("Enter a color: ", (color) => {
    readline.question("Enter an animal: ", (animal) => {
      readline.question("Enter a number between 100 and 900: ", (mana) => {
        console.log("\nWelcome to Magecraft University");
        console.log(`Your alias is ${color} ${animal}`);
        console.log(`Your current mana level is ${mana}, but we will polish you so that you reach your maximum potential!`);
        readline.close();
      });
    });
  });
  
