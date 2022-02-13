
const fs = require('fs').promises;
const string = "asdfasdfasdf"

fs.readdir('./').then((fileList) => {
    let fileNames = ""
    for (let i = 0; i < fileList.length; i++) {

        let temp_name = fileList[i].split(' ')
        console.log(fileList[0])
        let new_name = temp_name.join("-")
        if (new_name !== 'undefined') {
            if (new_name !== 'generateNameForScreenShotsMD.js') {
                if (new_name !== 'pictures.md') {
                    fs.rename("./" + fileList[i], "./" + new_name);
                    fileNames += `!["image"](./media/${new_name})` + '\n'
                }
            }
        }


    }
    console.log(fileNames)
    fs.writeFile('./pictures.md', fileNames)
}).catch((err) => { console.error(err) })