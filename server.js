const express = require('express');
const mongoose = require('mongoose');
const bodyParser = require('body-parser');

const app = express();


// CONNECT MONGODB
mongoose.connect('mongodb://127.0.0.1:27017/ProductDB')
.then(() => {
    console.log('MongoDB Connected');
})
.catch((err) => {
    console.log('MongoDB Error:', err.message);
});


// EJS
app.set('view engine', 'ejs');


// MIDDLEWARE
app.use(bodyParser.urlencoded({ extended: true }));


// ROUTES
const productRoutes = require('./routes/productRoutes');

app.use('/', productRoutes);


// RUN SERVER
app.listen(3000, () => {
    console.log('Server running at port 3000');
});