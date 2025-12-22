# KES ↔ USD Currency Converter (C)

A simple command-line currency converter written in C.  
It allows you to convert **Kenyan Shillings (KES)** to **United States Dollars (USD)** and vice versa using a fixed conversion rate.

---

## Features

- Converts **KES → USD** and **USD → KES**.  
- Handles **uppercase and lowercase input** (`KES`, `kes`, `USD`, `usd`).  
- Prints results to **2 decimal places**.  
- Safe input handling for invalid currency types.

---

## Current Rate

- **1 KES = 0.00776 USD** (as of 22 Dec, 2025)

> ⚠️ Note: This uses a fixed rate. For live updates, you would need to integrate with a currency API.

---

## Usage

1. Compile the program:

```bash
gcc currency_converter.c -o currency_converter
