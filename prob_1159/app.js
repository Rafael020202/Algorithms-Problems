const input = require('fs').readFileSync('dev/stdin/file.txt', 'utf-8');
const values = input.split('\n');
let v = parseInt(values.shift());

while (v != 0) {
    let aux = v, sum = 0;

    if (aux % 2 != 0) aux++;
    for (var i = 0; i < 5; i++) {
        sum += aux;
        aux += 2;
    }
    console.log(sum);
    v = parseInt(values.shift());
}





