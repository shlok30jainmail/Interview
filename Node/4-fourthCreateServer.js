const http = require('http');

// create server
http.createServer((req,res)=>{
  res.write("<p>Hello I am Shlok Jain </p>");
  res.end();
}).listen(4500);






// start file - 
// cmd - nodemon ./filename.js