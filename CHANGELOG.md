# Change log

All significant changes to **bin-unbin** will be documented here.

- [Released](#released)
  - [Version 1.1.0 - *2021-05-24*](#version-110---2021-05-24)
  - [Version 1.0.0 - *2021-05-23*](#version-100---2021-05-23)

## Released

### Version 1.1.0 - *2021-05-24*
- Introduced *"-t"* flag for binme and unbinme that produces pretty output for the input given.
  - Example:
    ```
    $ binme -t "Hello, World!"
    Binary  	Hex	Oct	Dec	Char
    01001000	48	110	72	H
    01100101	65	145	101	e
    01101100	6c	154	108	l
    01101100	6c	154	108	l
    01101111	6f	157	111	o
    00101100	2c	54	44	,
    00100000	20	40	32	 
    01010111	57	127	87	W
    01101111	6f	157	111	o
    01110010	72	162	114	r
    01101100	6c	154	108	l
    01100100	64	144	100	d
    00100001	21	41	33	!
    ```
- Included a changelog in the rpm package

### Version 1.0.0 - *2021-05-23*
The first "complete release"
