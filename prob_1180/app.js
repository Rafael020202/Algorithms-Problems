const input = require('fs').readFileSync('dev/stdin/file.txt', 'utf-8');
const line = input.split('\n');

line.shift();
const value = line.shift().split(' ');
let val = parseInt(value[0]), pos = 0;

for (let i = 0; i < value.length; i++) {
    if (parseInt(value[i]) < val) {
        val = parseInt(value[i]);
        pos = value.indexOf(val.toString());
    }
}

console.log(`Menor valor: ${val}
Posicao: ${pos}`);
