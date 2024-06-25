const { dir } = require('console');
const fs = require('fs');
const path = require('path');

const dirPath = path.join(__dirname,"Files");
const filePath = dirPath + "/open.txt";

// create file
// fs.writeFileSync(filePath, "Hi this file is created by 8-code file using crud operation using Fs module");

// Read File 
// syntax - filepath, type , callback fun
// fs.readFile(filePath, 'utf8',(err, item)=>{
//  console.log(item);
// })

// update file data
// fs.appendFile(filePath," hi this is append data", (err)=>{
    // if(!err){
    //     console.log("File is updated");
    // }
// })

// rename file
const newFilePath = dirPath+"/fruit.txt";
// fs.rename(filePath, newFilePath,(err)=>{
//     if(!err){
//         console.log("File is updated");
//     }
// })

// delete file
fs.unlinkSync(newFilePath); // we use newFilePath because our file path is changed 