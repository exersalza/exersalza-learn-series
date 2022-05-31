#!/bin/python3.10

import sqlite3 as sl3

# Create Connection, use :memory: for a temp database
conn = sl3.connect('users.db')

# Create a Cursor
cur = conn.cursor()


# Create a table
cur.execute(f"""
CREATE TABLE customers
""")



