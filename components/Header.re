let component = ReasonReact.statelessComponent("Header");

let styles = ReactDOMRe.Style.make(~marginRight="10px", ());

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <Next.Link href="/">
        <a style=styles> (ReasonReact.stringToElement("Home")) </a>
      </Next.Link>
      <Next.Link href="/about">
        <a style=styles> (ReasonReact.stringToElement("About")) </a>
      </Next.Link>
      <Next.Link href="/first">
        <a style=styles> (ReasonReact.stringToElement("First")) </a>
      </Next.Link>
      <Next.Link href="/second">
        <a style=styles> (ReasonReact.stringToElement("Second")) </a>
      </Next.Link>
      <Auth />
    </div>,
};