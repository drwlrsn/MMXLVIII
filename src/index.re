open Reprocessing;

/* Colour ideas from https://www.colourlovers.com/palette/4645104/lucky_numbers */

type gridT = {
  width: int,
  height: int
};

let grid = {
  width: 600,
  height: 600
};

let setup = (env) => {Env.size(~width=grid.width, ~height=grid.height, env); env};


let draw = (_state, env) => {
  Draw.background(Utils.color(~r=194, ~g=228, ~b=188, ~a=255), env);
  Draw.fill(Utils.color(~r=41, ~g=166, ~b=244, ~a=255), env);
  Draw.rect(~pos=(150, 150), ~width=300, ~height=300, env);
  env
};

run(~setup, ~draw, ());
