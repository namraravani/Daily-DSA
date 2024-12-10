const fs = require('fs');


function convertToDecimal(value, base) {
    let decimalValue = BigInt(0);
    const digits = value.split('').reverse(); 

    for (let i = 0; i < digits.length; i++) {
        const digit = parseInt(digits[i], 36); 
        decimalValue += BigInt(digit) * BigInt(base ** i); 
    }

    return decimalValue;
}


function decodeValue(base, value) {
    return convertToDecimal(value, parseInt(base));
}

function lagrangeInterpolation(points) {
    const k = points.length;
    let constantTerm = 0;

    for (let i = 0; i < k; i++) {
        const [x_i, y_i] = points[i];
        let product = 1;

        for (let j = 0; j < k; j++) {
            if (i !== j) {
                const [x_j] = points[j];
                product *= -x_j / (x_i - x_j);
            }
        }

        constantTerm += y_i * product;
    }
    return constantTerm;
}


fs.readFile('Catalog/input2.json', 'utf8', (err, data) => {
    if (err) {
        console.error('Error reading the file:', err);
        return;
    }
    const jsonInput = JSON.parse(data);
    const keys = jsonInput.keys;
    const n = keys.n;
    const k = keys.k;

    if (n < k) {
        console.error('Insufficient roots provided to solve for the polynomial.');
        return;
    }

    const points = [];
    for (let key in jsonInput) {
        if (key !== 'keys') {
            const base = jsonInput[key].base;
            const value = jsonInput[key].value;
            const x = parseInt(key);
            const y = Number(decodeValue(base, value));
            points.push([x, y]);
        }
    }

    const selectedPoints = points.slice(0, k);

    const constantTerm = lagrangeInterpolation(selectedPoints);
    console.log('The constant term C is equal to ', constantTerm);
});
