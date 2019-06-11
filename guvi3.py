char = input()
alphabets = 'abcdefghijklmnopqrsvutwxyz'
vov = 'aeiou'
if char in alphabets:
	if char in vov:
		print('Vowel')
	else:
		print('Alphabet')
else:
	print('invalid')
