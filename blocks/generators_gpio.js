Blockly.JavaScript['encoder_setupX'] = function (block) {
  var value_pina = Blockly.JavaScript.valueToCode(block, 'PinA', Blockly.JavaScript.ORDER_ATOMIC);
  var value_pinb = Blockly.JavaScript.valueToCode(block, 'PinB', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  // var code = `#EXTINC#include <Encoder.h>#END
  // #VARIABLEEncoder encoder;#END
  // encoder.begin(${value_pina}, ${value_pinb});
  // \n`;

  var code = `#EXTINC#include <Encoder.h>#END
  Encoder::beginX(${value_pina}, ${value_pinb});
  \n`;
  return code;
};

Blockly.JavaScript['encoder_setupY'] = function (block) {
  var value_pina = Blockly.JavaScript.valueToCode(block, 'PinA', Blockly.JavaScript.ORDER_ATOMIC);
  var value_pinb = Blockly.JavaScript.valueToCode(block, 'PinB', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  // var code = `#EXTINC#include <Encoder.h>#END
  // #VARIABLEEncoder encoder;#END
  // encoder.begin(${value_pina}, ${value_pinb});
  // \n`;

  var code = `#EXTINC#include <Encoder.h>#END
  Encoder::beginY(${value_pina}, ${value_pinb});
  \n`;
  return code;
};

Blockly.JavaScript['encoder_single_setupX'] = function (block) {
  var value_pina = Blockly.JavaScript.valueToCode(block, 'PinA', Blockly.JavaScript.ORDER_ATOMIC);

  var code = `#EXTINC#include <Encoder.h>#END
  Encoder::beginX(${value_pina});
  \n`;
  return code;
};

Blockly.JavaScript['encoder_single_setupY'] = function (block) {
  var value_pina = Blockly.JavaScript.valueToCode(block, 'PinA', Blockly.JavaScript.ORDER_ATOMIC);

  var code = `#EXTINC#include <Encoder.h>#END
  Encoder::beginY(${value_pina});
  \n`;
  return code;
};

Blockly.JavaScript['encoder_clearX'] = function (block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'Encoder::clearX();\n';
  return code;
};

Blockly.JavaScript['encoder_clearY'] = function (block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'Encoder::clearY();\n';
  return code;
};

Blockly.JavaScript['encoder_terminateX'] = function (block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'Encoder::endX();\n';
  return code;
};

Blockly.JavaScript['encoder_terminateY'] = function (block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'Encoder::endY();\n';
  return code;
};

Blockly.JavaScript['encoder_valueX'] = function (block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'Encoder::get_counterX()';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['encoder_valueY'] = function (block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'Encoder::get_counterY()';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};
