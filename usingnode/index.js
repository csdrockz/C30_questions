const { error } = require("console");
const fs=require("fs")
fs.writeFile("sample.txt","How are you?",(err)=>{
    if(err) throw error;
    console.log("File has been saved")
});