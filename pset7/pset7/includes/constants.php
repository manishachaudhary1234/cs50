<?php
    /**
     * constants.php
     *
     * Computer Science 50
     * Problem Set 7
     *
     * Global constants.
     */
    // your database's name
    define("DATABASE", "pset7");
    // your database's password
    define("PASSWORD", "crimson");
    // your database's server
    define("SERVER", "localhost");
    // your database's username
    define("USERNAME", "jharvard");
    // default starting cash amount for new account
    define("START_CASH", 10000);
    
    // form titles
    define("TITLE_REGISTER", "Register");
    define("TITLE_LOGIN", "Log In");
    define("TITLE_QUOTE", "Stock Quote");
    define("TITLE_BUY", "Buy Stock");
    define("TITLE_SELL", "Sell Stock");
    define("TITLE_DEPOSIT", "Deposit Funds");
    define("TITLE_HISTORY", "History");
    
    // history transaction types
    define("TRANS_BUY", "BUY");
    define("TRANS_SELL", "SELL");
    define("TRANS_DEPOSIT", "DEP");
    
?>