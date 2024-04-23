const http = require('http');
const { exec } = require('child_process');
const fs = require('fs');

const server = http.createServer((req, res) => {
    if (req.url === '/' || req.url === '/index.html') {
        fs.readFile('index.html', (err, data) => {
            if (err) {
                res.writeHead(500, { 'Content-Type': 'text/plain' });
                res.end('Internal Server Error');
                return;
            }
            res.writeHead(200, { 'Content-Type': 'text/html' });
            res.end(data);
        });
    } else if (req.url === '/execute') {
        // Execute the C program
        exec('gcc main.c -o main && ./main', (error, stdout, stderr) => {
            if (error) {
                console.error(`Error: ${error.message}`);
                res.writeHead(500, { 'Content-Type': 'text/plain' });
                res.end('Internal Server Error');
                return;
            }
            if (stderr) {
                console.error(`Error: ${stderr}`);
                res.writeHead(400, { 'Content-Type': 'text/plain' });
                res.end(stderr);
                return;
            }
            console.log(`Output: ${stdout}`);
            res.writeHead(200, { 'Content-Type': 'text/plain' });
            res.end(stdout);
        });
    } else {
        res.writeHead(404, { 'Content-Type': 'text/plain' });
        res.end('Not Found');
    }
});

const PORT = process.env.PORT || 3000;
server.listen(PORT, () => {
    console.log(`Server running on port ${PORT}`);
});
