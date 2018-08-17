let component = ReasonReact.statelessComponent("Header");

let make = (~title=?, _children) => {
  ...component,
  render: self =>
    <div className="header">
      <p>(ReasonReact.string(
        switch title {
          | None => "No text"
          | Some(txt) => txt
        }
        ))
      </p>
    </div>
}