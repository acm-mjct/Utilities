exports.generatePassword = passwordLength => {
  const characters = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@!#$%^&*()';
  const randomNumber = Math.floor(Math.random() + passwordLength);
  const password = Array(randomNumber)
    .fill(characters)
    .map(a => a[Math.floor(Math.random() * a.length)])
    .join('');
  return password;
};
