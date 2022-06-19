var jwt = require("express-jwt");
var secret = require("../config").secret;

function getTokenFromHeader(req) {
  if (
    (req.header.authorization &&
      req.header.authorization.split(" ")[0] === "Token") ||
    (req.header.authorization &&
      req.header.authorization.split(" ")[0] === "Bearer")
  ) {
    return req.header.authorization.split(" ")[1];
  }

  return null;
}
var auth = {
  required: jwt({
    secret: secret,
    userProperty: "payload",
    getToken: getTokenFromHeader,
  }),
  optional: jwt({
    secret: secret,
    userProperty: "payload",
    credentialsRequired: false,
    getToken: getTokenFromHeader,
  }),
};

module.exports = auth;
