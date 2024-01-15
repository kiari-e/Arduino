bool isBigEndian() {

  uint32_t test = 0x11223344;

  uint8_t *pTest = reinterpret_cast<uint8_t *>(&test);

  return pTest[0] == 0x11;
}

uint32_t fromNetwork32(uint32_t from) {

  static const bool be = isBigEndian();

  if (be) {

    return from;

  } else {

    uint8_t *pFrom = reinterpret_cast<uint8_t *>(&from);

    uint32_t to;

    to = pFrom[0]; to <<= 8;

    to |= pFrom[1]; to <<= 8;

    to |= pFrom[2]; to <<= 8;

    to |= pFrom[3];

    return to;

  }
}

uint16_t fromNetwork16(uint16_t from) {

  static bool be = isBigEndian();

  if (be) {

    return from;

  } else {

    uint8_t *pFrom = reinterpret_cast<uint8_t *>(&from);

    uint16_t to;

    to = pFrom[0]; to <<= 8;

    to |= pFrom[1];

    return to;

  }
}

uint32_t toNetwork32(uint32_t to) {

  return fromNetwork32(to);
}

uint16_t toNetwork16(uint16_t to) {

  return fromNetwork16(to);
}
