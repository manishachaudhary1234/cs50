<?php
    // configuration
    require("../includes/config.php"); 
    // set up all portfolio data
    require("../includes/portfolio_data.php");
    
    // render portfolio
    render("portfolio.php", 
        [
            "title" => "Portfolio", 
            "user" => $user, 
            "positions" => $positions, 
            "totalStockValue" => $totalStockValue, 
            "totalPortfolioValue" => $totalPortfolioValue
        ]);
?>