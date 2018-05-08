let component = ReasonReact.statelessComponent("Callback");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <Header />
      <p> (ReasonReact.stringToElement("Success!")) </p>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));