const val = require('./2.1-importExport-1'); // here we can't use direct import and export beacuse it is browser feature
var a =10;
a= a + val.x;
console.log(a);
console.log(val);