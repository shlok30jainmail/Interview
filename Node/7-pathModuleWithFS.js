// for creating a file inside a folder or directory
const { dir } = require('console');
const fs = require('fs');
const path = require('path');

const dirPath = path.join(__dirname,'Files');
console.log(dirPath);

// here we used directory name + "/filename", "file data"
fs.writeFileSync(dirPath+"/data.txt","This file is created by code 7 file using directory cmd");