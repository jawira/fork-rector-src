<?php

namespace Rector\Tests\Doctrine\Rector\Class_\AlwaysInitializeUuidInEntityRector\Fixture;

use Doctrine\ORM\Mapping as ORM;
use Rector\Tests\Doctrine\Rector\Class_\AlwaysInitializeUuidInEntityRector\Source\UuidInterface;

/**
 * @ORM\Entity
 */
class SkipAlreadyAdded
{
    /**
     * @ORM\Id
     * @var UuidInterface
     */
    private $superUuid;

    public function __construct()
    {
        $this->superUuid = \Ramsey\Uuid\Uuid::uuid4();
        $one = 2;
    }
}

?>