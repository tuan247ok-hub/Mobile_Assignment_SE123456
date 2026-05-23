const express = require('express');
const router = express.Router();
const Product = require('../models/Product');


// GET ALL
router.get('/', async (req, res) => {

    const products = await Product.find()
        .sort({ ProductStoreCode: -1 });

    res.render('index', { products });
});


// INSERT
router.post('/add', async (req, res) => {

    await Product.create(req.body);

    res.redirect('/');
});


// DELETE
router.post('/delete/:id', async (req, res) => {

    await Product.findByIdAndDelete(req.params.id);

    res.redirect('/');
});

module.exports = router;