let component = ReasonReact.statelessComponent("Auth");

type generatedAuth0Client = {. "authorize": [@bs.meth] (unit => unit)};

type clientOptions = {
  .
  "domain": string,
  "clientID": string,
  "redirectUri": string,
  "responseType": string,
  "scope": string,
};

[@bs.module "auth0-js"] [@bs.new]
external webAuth : clientOptions => generatedAuth0Client = "WebAuth";

let authOptions = {
  "domain": "yanis.auth0.com",
  "clientID": "kpOwsvJiNndPOI2aJI0iofvBaRX06wAd",
  "redirectUri": "http://localhost:3000/callback",
  "responseType": "token id_token",
  "scope": "openid",
};

let authClient = webAuth(authOptions);

let make = _children => {
  ...component,
  render: _self => {
    let handleAuth = _event => authClient##authorize();
    <div>
      <button onClick=handleAuth>
        (ReasonReact.stringToElement("Signin/Signup"))
      </button>
    </div>;
  },
};