const fs = require('fs');
// const fs = require('fs').writeFileSync; // for  using specific functionality of any big module we don't need to import whole module
// to create a file
fs.writeFileSync("hello.txt", "Hi This is a hello file is created by node js  fs command");
// to print a current directory
console.log(__dirname);
console.log(__filename); // directory name with filename