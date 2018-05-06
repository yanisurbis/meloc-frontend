let component = ReasonReact.statelessComponent("First");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <Header />
      <p> (ReasonReact.stringToElement("This is my first page.")) </p>
      <Counter />
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));