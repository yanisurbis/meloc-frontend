let component = ReasonReact.statelessComponent("Second");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <Header />
      <p> (ReasonReact.stringToElement("This is my second page.")) </p>
      <Counter />
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));