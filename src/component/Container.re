open Styles;

let component = ReasonReact.statelessComponent("Container");

let make = (_children) => {
  ...component,
  render: self => {
    <div style=styleds(centerStyle, containerSpace)>
    _children
    </div>
  }
}