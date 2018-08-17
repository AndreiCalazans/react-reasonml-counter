open Styles;

let component = ReasonReact.statelessComponent("Container");

let make = (_children) => {
  ...component,
  render: self => {
    let comb = ReactDOMRe.Style.combine;
    <div style=comb(centerStyle, containerSpace)>
    _children
    </div>
  }
}