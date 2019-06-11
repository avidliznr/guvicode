char = input()
alphabets = 'abcdefghijklmnopqrsvutwxzy'
vov = 'aeiou'
if char in alphabets:
	if char in vov:
		print('Vowel')
	else:
		print('Consonant')
else:
	print('invalid')
