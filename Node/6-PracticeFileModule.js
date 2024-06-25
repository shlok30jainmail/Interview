const fs = require('fs');

let input = process.argv; // it create a array of input after run the file

if(input[2]=="add"){
    fs.writeFileSync(input[3],input[4]); // create a new file 
}else if(input[2]=="remove"){
    fs.unlinkSync(input[3]); // delete existing file
}else{
    console.log("Write valid formate");
}


// run cmd - node ./__filename.js add/remove filename "file-date"