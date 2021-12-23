const fs = require('fs');

for (let i = 0; i < 31; i++) {
    fs.writeFileSync(`2021-07-${i}.md`, `# #2021-06-${i}\n\n## #routine \n\n## #things to do\n\n## #Journal\n\n## #photo log`)
}