const http = require('http');

http.createServer((req,res)=>{

    res.writeHead(200, {'Content-Type': 'json/Application'}); // it is use to download file
    res.write(JSON.stringify({name:'Shlok', mob:'892002'}));
    res.end();
}).listen(4000);


// run code
// nodemon ./filename.js