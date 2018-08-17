open Styles;

type action =
  | Add
  | Subtract;

let component = ReasonReact.reducerComponent("Counter");


let make = (_children) => {
  ...component,
  initialState: () => 0,
  reducer: (action, state) =>
    switch action {
    | Add => ReasonReact.Update(state + 1)
    | Subtract => ReasonReact.Update(state - 1)
    },
    render: (_self) => {
      let onAdd = (e) => _self.send(Add);
      let onSubtract = (e) => _self.send(Subtract);
      let countMessage = "Count: " ++ string_of_int(_self.state);

      <div style=styleds(styleds(containerSpace, centerStyle), column)>
        <p>(ReasonReact.string(countMessage))</p>
        <div style=styleds(centerStyle, row)>
          <Container>
            ...<Button onPress=onAdd label="Add" backgroundColor="yellow" />
          </Container>
          <Container>
            ...<Button onPress=onSubtract label="Substract" backgroundColor="yellow" />
          </Container>
        </div>
      </div>
    },
};
