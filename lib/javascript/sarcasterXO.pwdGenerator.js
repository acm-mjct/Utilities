exports.generatePassword = passwordLength => {
  let password = null;
  const characters = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@!#$%^&*()';
  for (let i = 0; i <= passwordLength; i++) {
    const randomNumber = Math.floor(Math.random() * characters.length);
    password = characters.substring(randomNumber, randomNumber + 1);
  }
  console.log(password);
};
